#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);//在这里这些都是C语言自带的定义define
//	FILE* pf = fopen("log.text", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//define 是用来定义符号的
//#define M 100
//#define mul(m) m*m
//#define MUL(m) (m)*(m) 
//#define add(m) (m)+(m)
//#define ADD(m) ((m)+(m))
//int main()
//{
//	//printf("%d\n",M);
//	printf("%d\n", mul(3));//在调用宏的时候，会先看参数里面是否具有宏，将参数宏变成参数，在被宏调用
//	//这里的define是宏，格式看上去很像函数，但是不允许递归
//	//括号要尽可能地使用
//	//否则
//	printf("%d\n", mul(3 + 1));//这里的结果是7，不是我们想要的16
//	//如果想要结果是16
//	printf("%d\n", MUL(3 + 1));//这里的结果就是16
//	//但是在这里又会出现新的错误
//	printf("%d\n", 10 * add(4));//这里的结果不是80而是44
//	//相当于10*4+4==44
//	//所以应该这样写
//	printf("%d\n", 10 * ADD(4));//这里是结果就是80
//    
//	return 0;
//}

//case可以这么写
//#define CASE break;case
//int main()
//{
//	int sc = 0;
//	scanf("%d", &sc);
//	switch (sc)
//	{
//	case 1:
//		CASE 2 :
//			CASE 3 :
//			;
//	}
//
//	return 0;
//}

//在define定义的符号后面最好不添加;
//#define max 100;
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = max;
//	//这里翻译过来就是100;;两个分号，但是if没有大括号，只能识别一个，另一个不能识别，就会报错
//	else
//		b = max;
//	return 0;
//}

////根据输入输出字符串 
//#define print(x) printf("the value "#x" is %d\n",x);
//#define print1(xx) printf("the value "#xx" is \n");
////这里的#x就可以输出想应的字符
////这里的#x就可以输入插入字符串
//int main()
//{
//	int a = 10;
//	print(a);
//	print1(aa);
//	return 0;
//}


//##链接符号
//错误使用
//#define classjl3 100
//int main()
//{
//	printf("%d\n", class##jl##3);
//	printf("%d\n", classjl3);
//	return 0;
//}

//#define cat(x,y,z) x##y##z
//int main()
//{
//	int classjl3 = 100;
//	printf("%d\n", cat(class, jl, 3));//这样使用就可以将各个符号连接起来
//	return 0;
//}

//宏和函数的比较
//宏的优点：
//1、如果想要计算的代码很简单，使用宏会让代码的效率更高
//2、宏在调用参数的时候，不用在意传递参数的类型
//宏的缺点
//1、宏在调用的时候，会将代码插入到原来的代码里面，如果调用的次数过多，会导致代码过长
//2、宏在预编译的时候就被覆盖了，无法在调试（就是在运行的时候进行调试）
//3、由于不在意参数的类型，所以不够严谨
//4、宏将参数带入会导致，带入的可能是一个表达式，会导致原来的运算符优先级预想要的优先级不同


//取消编译
//#define m 100
//#undef m
//int main()
//{
//	
//	return 0;
//}



//条件编译
//#define PI
//int main()
//{
//	//如果这个符号被编译之后，下面的条件就被执行，像if判断语句
////1、
////#ifdef PI
////	printf("hehe\n");
////#endif
//
////2、在if后面写一个表达式或者一个数，看其结果的布尔值
////都可以判断符号是否被定义
////#if pinr//1-2//1
////	printf("hehe\n");
////#endif
//
////3、多重判断，和if判断一样，只会选择一个
////#ifdef PINT//可以用来判断是否被定义
////	printf("haha");
////#elif 1//可以用来判断式子的布尔值
////	printf("hhh");
////#else
////	printf("asd");
////#endif
//	return 0;
//}


//条件编译，判断是否没有被编译
//另外一种写法
//int main()
//{
//#ifdef PINT
//	printf("qwe");
//#elif 1//可以多项
//#endif
//
//#if defined(PINT)
//	printf("123");
//#elif 0
//#endif
//
////-------------------------------------------------------
//
//#if !defined(PINT)
//	printf("213");
//#endif
//#ifndef PINT
//	printf("fgh");
//#endif
//	return 0;
//}

//可以嵌套命令
//int main()
//{
//#if 1
//     #if 1
//     #endif
//#endif
//	return 0;
//}


//总结：
// 开头有三种#if 、#ifdef和#if defined()否定#ifndef #if !defined
// 中间有一种#elif
// 末尾有一种#else
// 结尾必须有一个#endif



//""和<>两种包含头文件的方式不同
//首先""会先取寻找本地（自己写的）库文件，再去寻找C语言自带库函数
//<>只会寻找C语言自带的库函数


////库函数如果被多重包含，在编译的时候，就会多重复制，导致效率变低
////有两种避免方法(都在头文件中进行)
////1、
//#pragma once
//#define PRINT
////这样就能避免多重包含
//
////2、
//#ifndef __size_h__//头文件
//#define __size_h__
////内容
//struct s
//{
//	char a;
//	int s;
//};
//#endif
////我的理解：每次包含头文件进行预编译的时候，从头开始进行预编译，到这个头文件的时候向文件中进行预编译的时候
////先#ifndef判断是否拥有头文件，再包含，再#endif结束




//牛客网的题目
//设置前导符号，八进制022,十六进制0X123
//#include<stdio.h>
//int main()
//{
//    int i = 1234;
//    printf("%#o %#X", i, i);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%15d", 0xABCDEF);//可以用0零x来告诉编译器这是一个16进制
//    return 0;
//}

