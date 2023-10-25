//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOperation;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFinishWritingHelper
{
    NSArray *_finishWritingOperations;	// 24 = 0x18
    NSOperation *_transitionToTerminalStatusOperation;	// 32 = 0x20
    void *_figAssetWriterCallbackContextToken;	// 40 = 0x28
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 48 = 0x30
}

@property(readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation; // @synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation;
- (_Bool)_isDefunct;	// IMP=0x00000000000a0f3f
- (long long)status;	// IMP=0x00000000000a0f34
- (void)cancelWriting;	// IMP=0x00000000000a0e22
- (void)_finishWritingOperationsDidFinish;	// IMP=0x00000000000a0d4f
- (void)dealloc;	// IMP=0x00000000000a0c9f
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 figAssetWriterCallbackContextToken:(void *)arg3 figAssetWriter:(struct OpaqueFigAssetWriter *)arg4;	// IMP=0x00000000000a0a07

@end
