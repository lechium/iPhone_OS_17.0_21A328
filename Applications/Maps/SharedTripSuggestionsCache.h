//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSDate, NSDictionary, _PSMapsPredictionContext, _PSMapsSuggester;
@protocol OS_dispatch_queue;

@interface SharedTripSuggestionsCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSArray *_suggestions;	// 16 = 0x10
    NSArray *_suggestedContacts;	// 24 = 0x18
    NSDictionary *_recipientsByHandle;	// 32 = 0x20
    NSDate *_lastFreshRequestDate;	// 40 = 0x28
    _Bool _requestInProgress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_requestQueue;	// 56 = 0x38
    _PSMapsSuggester *_suggester;	// 64 = 0x40
    _PSMapsPredictionContext *_predictionContext;	// 72 = 0x48
    GEOObserverHashTable *_observers;	// 80 = 0x50
    NSArray *_suggestedRecipients;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0040000000d4a32e
- (void).cxx_destruct;	// IMP=0x0020000000d4bbca
@property(readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;
- (void)_provideAbandonmentFeedback;	// IMP=0x0010000000d4bad7
- (void)provideAbandonmentFeedback;	// IMP=0x0010000000d4ba1a
- (void)_provideFeedbackForContact:(id)arg1;	// IMP=0x0010000000d4b792
- (void)provideFeedbackForContact:(id)arg1;	// IMP=0x0010000000d4b693
- (void)_refreshFreshSuggestions:(id)arg1;	// IMP=0x0010000000d4ac29
- (void)requestFreshSuggestionsWithSeedContacts:(id)arg1;	// IMP=0x0010000000d4aa13
- (void)requestFreshSuggestions;	// IMP=0x0010000000d4a9ff
@property(readonly, nonatomic) _Bool isRefreshing;
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000d4a7e1
- (void)addObserver:(id)arg1;	// IMP=0x0010000000d4a5eb
@property(readonly, nonatomic) NSDictionary *recipientsByHandle;
@property(readonly, nonatomic) NSArray *suggestedContacts;
- (id)suggestions;	// IMP=0x0010000000d4a546
- (void)_prepareForSuggestionsIfNeeded;	// IMP=0x0010000000d4a471
- (id)init;	// IMP=0x0010000000d4a3b3

@end

