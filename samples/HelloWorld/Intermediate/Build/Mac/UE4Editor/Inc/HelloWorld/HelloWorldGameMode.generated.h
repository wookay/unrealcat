// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELLOWORLD_HelloWorldGameMode_generated_h
#error "HelloWorldGameMode.generated.h already included, missing '#pragma once' in HelloWorldGameMode.h"
#endif
#define HELLOWORLD_HelloWorldGameMode_generated_h

#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_RPC_WRAPPERS
#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAHelloWorldGameMode(); \
	friend HELLOWORLD_API class UClass* Z_Construct_UClass_AHelloWorldGameMode(); \
	public: \
	DECLARE_CLASS(AHelloWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, HelloWorld, NO_API) \
	DECLARE_SERIALIZER(AHelloWorldGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AHelloWorldGameMode*>(this); }


#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAHelloWorldGameMode(); \
	friend HELLOWORLD_API class UClass* Z_Construct_UClass_AHelloWorldGameMode(); \
	public: \
	DECLARE_CLASS(AHelloWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, HelloWorld, NO_API) \
	DECLARE_SERIALIZER(AHelloWorldGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AHelloWorldGameMode*>(this); }


#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHelloWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHelloWorldGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloWorldGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AHelloWorldGameMode(const AHelloWorldGameMode& InCopy); \
public:


#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHelloWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AHelloWorldGameMode(const AHelloWorldGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloWorldGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHelloWorldGameMode)


#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_11_PROLOG
#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_RPC_WRAPPERS \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_INCLASS \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_INCLASS_NO_PURE_DECLS \
	HelloWorld_Source_HelloWorld_HelloWorldGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HelloWorld_Source_HelloWorld_HelloWorldGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
