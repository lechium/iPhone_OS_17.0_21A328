//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC9storekitd17ProductLookupTask
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *productID;	// 16 = 0x10
    MISSING_TYPE *keyProfile;	// 32 = 0x20
    MISSING_TYPE *logKey;	// 48 = 0x30
    MISSING_TYPE *parameters;	// 64 = 0x40
    MISSING_TYPE *lookupResult;	// 72 = 0x48
    MISSING_TYPE *shouldUseAppStoreExtension;	// 80 = 0x50
    MISSING_TYPE *compatibleExtensionID;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00400000000f62a0
- (id)initWithoutKeepAlive;	// IMP=0x00100000000f6240
- (id)init;	// IMP=0x00100000000f6210
- (void)main;	// IMP=0x00100000000f60e0
- (id)initWithClient:(id)arg1 productID:(id)arg2 keyProfile:(id)arg3 logKey:(id)arg4 parameters:(id)arg5;	// IMP=0x00100000000f4030
@property(nonatomic, copy) NSString *compatibleExtensionID;
@property(nonatomic) _Bool shouldUseAppStoreExtension; // @synthesize shouldUseAppStoreExtension;
@property(nonatomic, copy) NSDictionary *lookupResult;

@end

