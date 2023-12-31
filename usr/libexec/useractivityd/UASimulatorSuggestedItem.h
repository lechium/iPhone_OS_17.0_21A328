//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UASimulator;

@interface UASimulatorSuggestedItem
{
    UASimulator *_simulator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000082c60
@property(retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (void)clearPayload;	// IMP=0x0010000000082c0a
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000825f7
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081fc8
- (id)initWithArchivedUserActivityInfo:(id)arg1 peerDevice:(id)arg2 simulator:(id)arg3;	// IMP=0x0010000000081ec8
- (id)initWithUserActivityInfo:(id)arg1 peerDevice:(id)arg2 simulator:(id)arg3;	// IMP=0x0010000000081de0

@end

