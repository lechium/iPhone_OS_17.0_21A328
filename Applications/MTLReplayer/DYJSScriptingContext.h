//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, JSVirtualMachine, NSString;

@interface DYJSScriptingContext : NSObject
{
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> _cache;	// 8 = 0x8
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> _stringCache;	// 48 = 0x30
    struct OpaqueJSValue *_globalObject;	// 88 = 0x58
    NSString *_filename;	// 96 = 0x60
    JSVirtualMachine *_virtualMachine;	// 104 = 0x68
    JSContext *_context;	// 112 = 0x70
    CDUnknownBlockType _exceptionHandler;	// 120 = 0x78
}

+ (id)sharedContext;	// IMP=0x0040000000040ca6
- (id).cxx_construct;	// IMP=0x0020000000040b0e
- (void).cxx_destruct;	// IMP=0x0010000000040a9d
@property(copy, nonatomic) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) JSVirtualMachine *virtualMachine; // @synthesize virtualMachine=_virtualMachine;
- (id)getGlobalJSONObject:(const char *)arg1;	// IMP=0x001000000004083d
- (_Bool)setGlobalJSONObject:(const char *)arg1 value:(id)arg2;	// IMP=0x00100000000405fe
- (double)getGlobalDouble:(const char *)arg1;	// IMP=0x00100000000404cb
- (void)setGlobalDouble:(const char *)arg1 value:(double)arg2;	// IMP=0x001000000004039e
- (double)callGlobalFunction:(const char *)arg1;	// IMP=0x001000000003fb05
- (struct OpaqueJSString *)_cachedStringFromString:(const char *)arg1;	// IMP=0x001000000003f46c
- (double)callFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x001000000003f42a
- (id)getValue:(id)arg1;	// IMP=0x001000000003f414
- (_Bool)evaluteScript:(id)arg1 scriptURL:(id)arg2;	// IMP=0x001000000003f2eb
- (void)_clearCache;	// IMP=0x001000000003f227
- (void)setValues:(id)arg1;	// IMP=0x001000000003f1d5
- (void)setRawArrayValues:(id)arg1 withUint64Values:(unsigned long long *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000003f0c2
- (struct OpaqueJSValue *)createArrayRef:(id)arg1;	// IMP=0x001000000003f027
- (void)setRawArrayValues:(id)arg1 withUint32Values:(unsigned int *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000003ef21
- (id)setValue:(id)arg1 value:(id)arg2;	// IMP=0x001000000003eecb
- (basic_string_eaee8f9a)_jsValueToString:(struct OpaqueJSValue *)arg1;	// IMP=0x001000000003ee62
- (basic_string_eaee8f9a)_jsStringToString:(struct OpaqueJSString *)arg1;	// IMP=0x001000000003ed99
- (void)dealloc;	// IMP=0x001000000003ed38
- (void)allocNewContext;	// IMP=0x001000000003ece8
- (id)init;	// IMP=0x001000000003ec81

@end

