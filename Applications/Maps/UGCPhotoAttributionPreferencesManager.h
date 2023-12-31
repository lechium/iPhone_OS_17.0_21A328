//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeedbackSubmissionTicket, GEOObserverHashTable, GEORPPhotoAttributionPreferences, NSDate, NSString, geo_isolater;
@protocol OS_dispatch_queue;

@interface UGCPhotoAttributionPreferencesManager : NSObject
{
    FeedbackSubmissionTicket *_ticket;	// 8 = 0x8
    GEOObserverHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    geo_isolater *_observersIsolator;	// 32 = 0x20
    GEORPPhotoAttributionPreferences *_fetchedPreferences;	// 40 = 0x28
    NSDate *_dateOfFetchedPreferences;	// 48 = 0x30
    NSString *_updateError;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x0020000000649ceb
- (void).cxx_destruct;	// IMP=0x002000000064b8b1
@property(copy, nonatomic) NSString *updateError; // @synthesize updateError=_updateError;
@property(retain, nonatomic) NSDate *dateOfFetchedPreferences; // @synthesize dateOfFetchedPreferences=_dateOfFetchedPreferences;
@property(retain, nonatomic) GEORPPhotoAttributionPreferences *fetchedPreferences; // @synthesize fetchedPreferences=_fetchedPreferences;
- (void)removeObserver:(id)arg1;	// IMP=0x001000000064b7f9
- (void)addObserver:(id)arg1;	// IMP=0x001000000064b790
- (id)observers;	// IMP=0x001000000064b624
- (id)_errorMessageForError:(int)arg1;	// IMP=0x001000000064b582
- (id)_errorsInResponse:(id)arg1;	// IMP=0x001000000064b361
- (void)_finishWithPreferences:(id)arg1 serverError:(id)arg2 errorAsString:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x001000000064b235
- (void)updatePhotoAttributionPreferencesAttributePhotos:(_Bool)arg1 attributionName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000064a841
- (void)_fetchPhotoAttributionPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000064a16d
- (void)_storeFetchedPreferences:(id)arg1;	// IMP=0x001000000064a092
- (void)photoAttributionPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000649dd9
- (id)init;	// IMP=0x0010000000649d40

@end

