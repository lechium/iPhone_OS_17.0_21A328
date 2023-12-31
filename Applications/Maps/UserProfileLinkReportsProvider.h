//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, UserProfileLink;

@interface UserProfileLinkReportsProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    GEOObserverHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000367f87
- (void).cxx_destruct;	// IMP=0x002000000036853e
- (void)userDataDidUpdate;	// IMP=0x0010000000368527
- (void)reportHistoryManagerDidUpdate:(id)arg1;	// IMP=0x0010000000368510
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateLinkAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000368400
- (id)retrieveSubtitleText;	// IMP=0x001000000036830a
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x00100000003680e0
- (id)init;	// IMP=0x0010000000367fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

