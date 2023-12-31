//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CKDContainer, CKDOperation, NSDate, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    int _executionState;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    CKDOperation *_realOperation;	// 32 = 0x20
    NSOperationQueue *_targetOperationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000026b46b
@property(readonly, nonatomic) NSOperationQueue *targetOperationQueue; // @synthesize targetOperationQueue=_targetOperationQueue;
@property(readonly, nonatomic) CKDOperation *realOperation; // @synthesize realOperation=_realOperation;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)statusReportWithIndent:(unsigned long long)arg1;	// IMP=0x000000000026b25c
- (id)_startDateString;	// IMP=0x000000000026b13d
- (id)description;	// IMP=0x000000000026b12b
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x000000000026aeb4
- (id)ckShortDescription;	// IMP=0x000000000026ae2c
- (void)cancel;	// IMP=0x000000000026acdb
- (void)transitionToFinished;	// IMP=0x000000000026acc7
- (void)transitionToExecuting;	// IMP=0x000000000026acb3
- (_Bool)isExecuting;	// IMP=0x000000000026aca2
- (_Bool)isFinished;	// IMP=0x000000000026ac91
- (_Bool)isConcurrent;	// IMP=0x000000000026ac89
- (void)main;	// IMP=0x000000000026a656
- (void)start;	// IMP=0x000000000026a4a1
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) __weak CKDContainer *container;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;	// IMP=0x000000000026a23e

@end

