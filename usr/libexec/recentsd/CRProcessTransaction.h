//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface CRProcessTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
}

+ (id)transactionWithDescription:(id)arg1;	// IMP=0x0040000000010011
- (id)description;	// IMP=0x00200000000100fd
- (void)dealloc;	// IMP=0x00100000000100c2
- (id)initWithDescription:(id)arg1;	// IMP=0x0010000000010063
- (id)init;	// IMP=0x0010000000010040

@end

