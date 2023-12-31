//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PICompositionExporter;

@interface PhotosAdjustmentsVideoTranscodingTask
{
    PICompositionExporter *_photosAdjustmentsCompositionExporter;	// 152 = 0x98
    NSProgress *_progress;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000001c857
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) PICompositionExporter *photosAdjustmentsCompositionExporter; // @synthesize photosAdjustmentsCompositionExporter=_photosAdjustmentsCompositionExporter;
- (void)dumpStatistics;	// IMP=0x001000000001c577
- (void)cancelTranscode;	// IMP=0x001000000001c40b
- (double)currentFractionCompleted;	// IMP=0x001000000001c30a
- (_Bool)hasProgress;	// IMP=0x001000000001c2d7
- (CDUnknownBlockType)photosAdjustmentsExporterCompletionHandler;	// IMP=0x001000000001c289
- (_Bool);	// IMP=0x001000000001c1b4
- (void)performExport;	// IMP=0x001000000001aedd

@end

