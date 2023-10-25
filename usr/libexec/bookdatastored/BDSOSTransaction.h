//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BDSOSTransactionDelegate, OS_os_transaction;

@interface BDSOSTransaction : NSObject
{
    id <BDSOSTransactionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_os_transaction> *_osTransaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001197c
@property(retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(nonatomic) __weak id <BDSOSTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00100000000117f4
- (void)endTransaction;	// IMP=0x0010000000011664
- (void)transactionNeedsMoreTime;	// IMP=0x0010000000011557
- (id)initWithTransactionName:(const char *)arg1;	// IMP=0x0010000000011478

@end
