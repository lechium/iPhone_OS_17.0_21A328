//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SDAutoUnlockIconTransferStore : NSObject
{
    NSMutableDictionary *_transferStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e8bc9
- (void)_loadTransferStore;	// IMP=0x00100000000e8b04
- (_Bool)imageCachedForHash:(id)arg1 device:(id)arg2;	// IMP=0x00100000000e88e8
- (void)storeCachedImageForHash:(id)arg1 device:(id)arg2 appName:(id)arg3;	// IMP=0x00100000000e856a
- (id)init;	// IMP=0x00100000000e850c

@end

