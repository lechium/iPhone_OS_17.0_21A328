//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, TKHostTokenRegistry;

@interface TKHostTokenRegistryTransaction : NSObject
{
    TKHostTokenRegistry *_registry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000034e1
- (void)dealloc;	// IMP=0x0010000000003429
@property(readonly, nonatomic) NSDictionary *tokenExtensions;
- (id)keychainItemsModified:(id)arg1;	// IMP=0x0010000000003305
- (id)markModified;	// IMP=0x0010000000003240
- (void)commit;	// IMP=0x0010000000003175
- (id)initWithRegistry:(id)arg1;	// IMP=0x0010000000003111

@end

