//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUWebBridgeConfiguration : NSObject
{
    NSString *_bridgeVersion;	// 8 = 0x8
    NSString *_nativeControllerName;	// 16 = 0x10
    NSString *_webControllerName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001244b5
@property(readonly, copy, nonatomic) NSString *webControllerName; // @synthesize webControllerName=_webControllerName;
@property(readonly, copy, nonatomic) NSString *nativeControllerName; // @synthesize nativeControllerName=_nativeControllerName;
@property(readonly, copy, nonatomic) NSString *bridgeVersion; // @synthesize bridgeVersion=_bridgeVersion;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001242d9
- (unsigned long long)hash;	// IMP=0x0000000000124223
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001241d2
- (id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3;	// IMP=0x00000000001240e9

@end
