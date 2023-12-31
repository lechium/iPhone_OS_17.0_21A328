//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUPickerConfiguration, VCPMediaAnalysisService;

__attribute__((visibility("hidden")))
@interface PUPickerOnDemandProcessor : NSObject
{
    int _stickerScoringRequestID;	// 8 = 0x8
    PUPickerConfiguration *_configuration;	// 16 = 0x10
    VCPMediaAnalysisService *_service;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ca9b7
@property(nonatomic) int stickerScoringRequestID; // @synthesize stickerScoringRequestID=_stickerScoringRequestID;
@property(readonly, nonatomic) VCPMediaAnalysisService *service; // @synthesize service=_service;
@property(readonly, nonatomic) PUPickerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_performOnDemandStaticStickerScoringProcessingForRecentAssets:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca786
- (void)performOnDemandProcessingWithCanDisplayUserInterfaceHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca580
- (void)dealloc;	// IMP=0x00000000000ca506
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000ca471

@end

