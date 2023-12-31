//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class MPCAssistantRemoteControlDestination, MPPlaybackArchive, NSArray, NSDictionary, NSNumber, NSString;
@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;

__attribute__((visibility("hidden")))
@interface HMDMPCSendMRCommandOperation : HMFOperation
{
    MPCAssistantRemoteControlDestination *_destination;	// 8 = 0x8
    MPPlaybackArchive *_playbackArchive;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    NSNumber *_mediaRemoteCommand;	// 32 = 0x20
    id <HMDMPCSendMRCommandOperationExternalObjectInterface> _externalObjectInterface;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000009c7723
+ (id)shortDescription;	// IMP=0x00100000009c7716
- (void).cxx_destruct;	// IMP=0x00000000009c6e5a
@property(readonly) id <HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(readonly, nonatomic) NSNumber *mediaRemoteCommand; // @synthesize mediaRemoteCommand=_mediaRemoteCommand;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(readonly, nonatomic) MPCAssistantRemoteControlDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)main;	// IMP=0x00000000009c659f
- (id)initWithPlaybackArchive:(id)arg1 destination:(id)arg2 options:(id)arg3 externalObjectInterface:(id)arg4;	// IMP=0x00000000009c6491
- (id)initWithPlaybackArchive:(id)arg1 options:(id)arg2 destination:(id)arg3;	// IMP=0x00000000009c63f2
- (id)initWithCommand:(unsigned int)arg1 destination:(id)arg2 options:(id)arg3 externalObjectInterface:(id)arg4;	// IMP=0x00000000009c62d0
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 destination:(id)arg3;	// IMP=0x00000000009c6244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

