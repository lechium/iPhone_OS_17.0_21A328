//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface AVCaptureSessionConfiguration : NSObject
{
    long long _configurationID;	// 8 = 0x8
    NSArray *_inputs;	// 16 = 0x10
    NSArray *_outputs;	// 24 = 0x18
    NSHashTable *_videoPreviewLayers;	// 32 = 0x20
    NSArray *_connections;	// 40 = 0x28
}

@property(readonly) NSArray *connections; // @synthesize connections=_connections;
@property(readonly) NSHashTable *videoPreviewLayers; // @synthesize videoPreviewLayers=_videoPreviewLayers;
@property(readonly) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) long long configurationID; // @synthesize configurationID=_configurationID;
- (id)uniqueVideoPreviewLayers:(id)arg1;	// IMP=0x00000000000a4975
- (id)uniqueConnections:(id)arg1;	// IMP=0x00000000000a48fd
- (id)uniqueOutputs:(id)arg1;	// IMP=0x00000000000a4885
- (id)uniqueInputs:(id)arg1;	// IMP=0x00000000000a480d
- (void)dealloc;	// IMP=0x00000000000a47b5
- (id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5;	// IMP=0x00000000000a4715

@end

