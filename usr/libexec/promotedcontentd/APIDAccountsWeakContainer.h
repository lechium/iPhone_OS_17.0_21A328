//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSPointerArray;

@interface APIDAccountsWeakContainer : NSObject
{
    NSPointerArray *_idAccounts;	// 8 = 0x8
    APUnfairLock *_lock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000101a80
- (void).cxx_destruct;	// IMP=0x0020000000101e6b
@property(retain, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSPointerArray *idAccounts; // @synthesize idAccounts=_idAccounts;
- (id)addIDAccount:(id)arg1;	// IMP=0x0010000000101b74
- (id)init;	// IMP=0x0010000000101ad5

@end
