//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x004000000013c954
- (long long)hearstOwnership;	// IMP=0x004000000013cb83
- (void)getHearstOwnershipStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000013cb57
- (_Bool)carPlayConnected;	// IMP=0x001000000013cb34
- (_Bool)jarvisConnected;	// IMP=0x001000000013cb11
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000013cae5
- (_Bool)siriInputSourceOutOfBand;	// IMP=0x001000000013cac2
- (void)getSiriInputSourceOutOfBand:(CDUnknownBlockType)arg1;	// IMP=0x001000000013ca96
- (_Bool)hearstRouted;	// IMP=0x001000000013ca73
- (void)getHearstRouted:(CDUnknownBlockType)arg1;	// IMP=0x001000000013ca47
- (_Bool)hearstConnected;	// IMP=0x001000000013ca24
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000013c9f8
- (void)_stopMonitoring;	// IMP=0x001000000013c9d5
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000013c9a9

@end

