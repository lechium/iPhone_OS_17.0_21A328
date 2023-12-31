//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAttSiriMagusSupportedPolicy : NSObject
{
    _Bool _isAssetMagusSupported;	// 8 = 0x8
}

+ (_Bool)_isInputOriginSupportedByContinuousConversation:(id)arg1;	// IMP=0x002000000008b966
+ (void)initialize;	// IMP=0x001000000008b8c3
+ (id)sharedInstance;	// IMP=0x001000000008b893
@property _Bool isAssetMagusSupported; // @synthesize isAssetMagusSupported=_isAssetMagusSupported;
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;	// IMP=0x001000000008b851
- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;	// IMP=0x001000000008b84b
- (void)mitigationAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x001000000008b836
- (void)_updateWithAsset:(id)arg1;	// IMP=0x001000000008b737
- (void)start;	// IMP=0x001000000008b5f9
- (_Bool)_isMagusSupportedWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 isInSplitterMode:(_Bool)arg3 isInActiveCall:(_Bool)arg4 isSupportedRequestType:(_Bool)arg5 audioSessionId:(unsigned int)arg6;	// IMP=0x001000000008b1ab
- (_Bool)isMagusSupportedWithAudioRecordContext:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 audioSessionId:(unsigned int)arg4;	// IMP=0x001000000008b07c
- (_Bool)isMagusSupportedWithInputOrigin:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 isInSplitterMode:(_Bool)arg4 isInActiveCall:(_Bool)arg5;	// IMP=0x001000000008afd9
- (_Bool)getIsMagusSupported;	// IMP=0x001000000008afc7
- (_Bool)getIsAssetMagusSupported;	// IMP=0x001000000008afbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

