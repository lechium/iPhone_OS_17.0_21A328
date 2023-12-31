//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class NSObject, NSThread;
@protocol OS_voucher;

__attribute__((visibility("hidden")))
@interface __HMFThreadContext : HMFObject
{
    _Bool _shouldRestoreVoucher;	// 8 = 0x8
    NSThread *_thread;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    NSObject<OS_voucher> *_voucher;	// 32 = 0x20
}

+ (id)currentContext;	// IMP=0x004000000001f56b
- (void).cxx_destruct;	// IMP=0x000000000001f79d
@property(nonatomic) _Bool shouldRestoreVoucher; // @synthesize shouldRestoreVoucher=_shouldRestoreVoucher;
@property(retain, nonatomic) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSThread *thread; // @synthesize thread=_thread;
- (id)description;	// IMP=0x000000000001f6e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f653
- (unsigned long long)hash;	// IMP=0x000000000001f636
- (id)__init;	// IMP=0x000000000001f607
- (id)init;	// IMP=0x000000000001f4c3

@end

