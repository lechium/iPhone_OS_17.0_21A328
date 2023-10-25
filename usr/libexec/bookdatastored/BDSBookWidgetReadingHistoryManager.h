//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSBookWidgetDataUpdater, BDSBookWidgetReadingHistoryData, BDSBookWidgetReadingHistoryDataFile, BDSReadingHistoryStateInfo;
@protocol BDSOSTransactionProviding, OS_dispatch_queue;

@interface BDSBookWidgetReadingHistoryManager : NSObject
{
    struct os_unfair_lock_s _accessLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_saveQueue;	// 16 = 0x10
    BDSBookWidgetReadingHistoryData *_lastState;	// 24 = 0x18
    BDSBookWidgetDataUpdater *_bookWidgetDataUpdater;	// 32 = 0x20
    id <BDSOSTransactionProviding> _transactionProvider;	// 40 = 0x28
    BDSBookWidgetReadingHistoryDataFile *_dataFile;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000003a84
@property(retain, nonatomic) BDSBookWidgetReadingHistoryData *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) BDSBookWidgetReadingHistoryDataFile *dataFile; // @synthesize dataFile=_dataFile;
@property(retain, nonatomic) id <BDSOSTransactionProviding> transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(retain, nonatomic) BDSBookWidgetDataUpdater *bookWidgetDataUpdater; // @synthesize bookWidgetDataUpdater=_bookWidgetDataUpdater;
- (void)_processViewStateChange:(id)arg1;	// IMP=0x0010000000003519
- (void)handleReadingHistoryViewStateChange:(id)arg1;	// IMP=0x00100000000034d0
@property(readonly, nonatomic) BDSReadingHistoryStateInfo *currentViewStateInfo;
- (id)initWithBookWidgetDataUpdater:(id)arg1 transactionProvider:(id)arg2;	// IMP=0x0010000000003295

@end
