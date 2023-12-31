//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBFZStackParticipantSettings;

@protocol SBFZStackParticipantObserver <NSObject>

@optional
- (void)zStackParticipantWasInvalidated:(long long)arg1;
- (void)zStackParticipantWithIdentifier:(long long)arg1 settingsDidChange:(id <SBFZStackParticipantSettings>)arg2;
- (void)zStackParticipantWithIdentifier:(long long)arg1 wasAcquiredWithSettings:(id <SBFZStackParticipantSettings>)arg2;
@end

