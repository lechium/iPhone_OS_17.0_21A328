//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PARBag, PARSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DDLookupQuery : NSObject
{
    PARSession *_session;	// 8 = 0x8
    PARBag *_bag;	// 16 = 0x10
    _Bool _bagFetchingOver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_bagQueue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_bagSem;	// 40 = 0x28
}

+ (id)footerSectionForString:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x0020000000007820
+ (id)dictionarySectionForString:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x00100000000076f0
+ (id)queryWithoutNetwork;	// IMP=0x0010000000002ba0
+ (id)queryWithQuery:(id)arg1;	// IMP=0x00100000000028f0
- (void).cxx_destruct;	// IMP=0x00200000000078e0
- (void)sectionsForString:(id)arg1 useNetwork:(_Bool)arg2 clientId:(id)arg3 queryId:(unsigned long long)arg4 selectionType:(long long)arg5 domain:(id)arg6 range:(struct _NSRange)arg7 scale:(double)arg8 proxy:(id)arg9 handler:(CDUnknownBlockType)arg10;	// IMP=0x00100000000047c0
- (id)_rankFeedbackWithLocalSections:(id)arg1 remoteSections:(id)arg2 footerSection:(id)arg3;	// IMP=0x0010000000003d20
- (void)sectionsForResult:(struct __DDResult *)arg1 useNetwork:(_Bool)arg2 clientId:(id)arg3 queryId:(unsigned long long)arg4 scale:(double)arg5 proxy:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000003a80
- (_Bool)parsecEnabled;	// IMP=0x0010000000003760
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;	// IMP=0x0010000000003490
- (id)bag;	// IMP=0x0010000000002d70
- (id)initWithSession:(id)arg1;	// IMP=0x0010000000002be0
- (id)feedbackListener;	// IMP=0x00100000000028d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
