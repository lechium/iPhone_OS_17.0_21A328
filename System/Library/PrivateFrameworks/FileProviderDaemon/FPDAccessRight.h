//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtension;

__attribute__((visibility("hidden")))
@interface FPDAccessRight : NSObject
{
    unsigned long long _accessLevel;	// 8 = 0x8
    FPDExtension *_provider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000515c4
@property(readonly, nonatomic) __weak FPDExtension *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) unsigned long long level;
- (id)init;	// IMP=0x00000000000514e4
- (id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3;	// IMP=0x00000000000514c5
- (id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4;	// IMP=0x0000000000051352
- (void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3;	// IMP=0x00000000000510ce

@end

