#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);//��������Щ����C�����Դ��Ķ���define
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


//define ������������ŵ�
//#define M 100
//#define mul(m) m*m
//#define MUL(m) (m)*(m) 
//#define add(m) (m)+(m)
//#define ADD(m) ((m)+(m))
//int main()
//{
//	//printf("%d\n",M);
//	printf("%d\n", mul(3));//�ڵ��ú��ʱ�򣬻��ȿ����������Ƿ���к꣬���������ɲ������ڱ������
//	//�����define�Ǻ꣬��ʽ����ȥ�����������ǲ�����ݹ�
//	//����Ҫ�����ܵ�ʹ��
//	//����
//	printf("%d\n", mul(3 + 1));//����Ľ����7������������Ҫ��16
//	//�����Ҫ�����16
//	printf("%d\n", MUL(3 + 1));//����Ľ������16
//	//�����������ֻ�����µĴ���
//	printf("%d\n", 10 * add(4));//����Ľ������80����44
//	//�൱��10*4+4==44
//	//����Ӧ������д
//	printf("%d\n", 10 * ADD(4));//�����ǽ������80
//    
//	return 0;
//}

//case������ôд
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

//��define����ķ��ź�����ò����;
//#define max 100;
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = max;
//	//���﷭���������100;;�����ֺţ�����ifû�д����ţ�ֻ��ʶ��һ������һ������ʶ�𣬾ͻᱨ��
//	else
//		b = max;
//	return 0;
//}

////������������ַ��� 
//#define print(x) printf("the value "#x" is %d\n",x);
//#define print1(xx) printf("the value "#xx" is \n");
////�����#x�Ϳ��������Ӧ���ַ�
////�����#x�Ϳ�����������ַ���
//int main()
//{
//	int a = 10;
//	print(a);
//	print1(aa);
//	return 0;
//}


//##���ӷ���
//����ʹ��
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
//	printf("%d\n", cat(class, jl, 3));//����ʹ�þͿ��Խ�����������������
//	return 0;
//}

//��ͺ����ıȽ�
//����ŵ㣺
//1�������Ҫ����Ĵ���ܼ򵥣�ʹ�ú���ô����Ч�ʸ���
//2�����ڵ��ò�����ʱ�򣬲������⴫�ݲ���������
//���ȱ��
//1�����ڵ��õ�ʱ�򣬻Ὣ������뵽ԭ���Ĵ������棬������õĴ������࣬�ᵼ�´������
//2������Ԥ�����ʱ��ͱ������ˣ��޷��ڵ��ԣ����������е�ʱ����е��ԣ�
//3�����ڲ�������������ͣ����Բ����Ͻ�
//4���꽫��������ᵼ�£�����Ŀ�����һ�����ʽ���ᵼ��ԭ������������ȼ�Ԥ��Ҫ�����ȼ���ͬ


//ȡ������
//#define m 100
//#undef m
//int main()
//{
//	
//	return 0;
//}



//��������
//#define PI
//int main()
//{
//	//���������ű�����֮������������ͱ�ִ�У���if�ж����
////1��
////#ifdef PI
////	printf("hehe\n");
////#endif
//
////2����if����дһ�����ʽ����һ�������������Ĳ���ֵ
////�������жϷ����Ƿ񱻶���
////#if pinr//1-2//1
////	printf("hehe\n");
////#endif
//
////3�������жϣ���if�ж�һ����ֻ��ѡ��һ��
////#ifdef PINT//���������ж��Ƿ񱻶���
////	printf("haha");
////#elif 1//���������ж�ʽ�ӵĲ���ֵ
////	printf("hhh");
////#else
////	printf("asd");
////#endif
//	return 0;
//}


//�������룬�ж��Ƿ�û�б�����
//����һ��д��
//int main()
//{
//#ifdef PINT
//	printf("qwe");
//#elif 1//���Զ���
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

//����Ƕ������
//int main()
//{
//#if 1
//     #if 1
//     #endif
//#endif
//	return 0;
//}


//�ܽ᣺
// ��ͷ������#if ��#ifdef��#if defined()��#ifndef #if !defined
// �м���һ��#elif
// ĩβ��һ��#else
// ��β������һ��#endif



//""��<>���ְ���ͷ�ļ��ķ�ʽ��ͬ
//����""����ȡѰ�ұ��أ��Լ�д�ģ����ļ�����ȥѰ��C�����Դ��⺯��
//<>ֻ��Ѱ��C�����Դ��Ŀ⺯��


////�⺯����������ذ������ڱ����ʱ�򣬾ͻ���ظ��ƣ�����Ч�ʱ��
////�����ֱ��ⷽ��(����ͷ�ļ��н���)
////1��
//#pragma once
//#define PRINT
////�������ܱ�����ذ���
//
////2��
//#ifndef __size_h__//ͷ�ļ�
//#define __size_h__
////����
//struct s
//{
//	char a;
//	int s;
//};
//#endif
////�ҵ���⣺ÿ�ΰ���ͷ�ļ�����Ԥ�����ʱ�򣬴�ͷ��ʼ����Ԥ���룬�����ͷ�ļ���ʱ�����ļ��н���Ԥ�����ʱ��
////��#ifndef�ж��Ƿ�ӵ��ͷ�ļ����ٰ�������#endif����




//ţ��������Ŀ
//����ǰ�����ţ��˽���022,ʮ������0X123
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
//    printf("%15d", 0xABCDEF);//������0��x�����߱���������һ��16����
//    return 0;
//}

