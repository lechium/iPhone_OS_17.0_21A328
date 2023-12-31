//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSString, NSURL;
@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState *_configurationState;	// 8 = 0x8
    AVWeakReference *_weakReferenceToAssetWriter;	// 16 = 0x10
}

@property(retain) AVWeakReference *weakReferenceToAssetWriter; // @synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter;
@property(readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, nonatomic, getter=_isDefunct) _Bool defunct;
- (void)flushSegment;	// IMP=0x00000000000a374d
- (void)flush;	// IMP=0x00000000000a36cd
- (void)transitionToFailedStatusWithError:(id)arg1;	// IMP=0x00000000000a34e2
- (_Bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;	// IMP=0x00000000000a32d5
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a3255
- (void)finishWriting;	// IMP=0x00000000000a31d5
- (void)cancelWriting;	// IMP=0x00000000000a31cf
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a314f
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a30cf
- (void)startWriting;	// IMP=0x00000000000a304f
- (void)addInputGroup:(id)arg1;	// IMP=0x00000000000a2fcf
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x00000000000a2fc7
- (void)addInput:(id)arg1;	// IMP=0x00000000000a2f47
- (_Bool)canAddInput:(id)arg1;	// IMP=0x00000000000a2f3f
- (_Bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x00000000000a2dff
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;	// IMP=0x00000000000a2d88
- (_Bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;	// IMP=0x00000000000a275a
@property(readonly, nonatomic) NSArray *inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
@property(nonatomic) long long singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize;
@property(nonatomic) _Bool requiresInProcessOperation;
@property(nonatomic) _Bool usesVirtualCaptureCard;
@property(readonly, nonatomic, getter=isVirtualCaptureCardSupported) _Bool virtualCaptureCardSupported;
@property(nonatomic) _Bool producesCombinableFragments;
@property(nonatomic) long long initialMovieFragmentSequenceNumber;
@property(copy, nonatomic) NSString *outputFileTypeProfile;
@property(nonatomic) CDStruct_1b6d18a9 initialSegmentStartTime;
@property(nonatomic) CDStruct_1b6d18a9 preferredOutputSegmentInterval;
@property(nonatomic) float preferredRate;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 initialMovieFragmentInterval;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property __weak id <AVAssetWriterDelegate> delegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType;
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;	// IMP=0x00000000000a17ba
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a16cd
- (id)init;	// IMP=0x00000000000a16b9

@end

