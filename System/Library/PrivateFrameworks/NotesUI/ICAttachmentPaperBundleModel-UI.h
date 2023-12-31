//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentPaperBundleModel.h>

@interface ICAttachmentPaperBundleModel (UI)
+ (_Bool)generateImagePreviewsForAttachment:(id)arg1 withFallbackPDFData:(id)arg2;	// IMP=0x008000000013a1a5
+ (_Bool)fallbackPDFGenerationEnabled;	// IMP=0x0080000000139844
- (void)drawPreviewInRect:(struct CGRect)arg1;	// IMP=0x0010000000066648
- (id)activityItems;	// IMP=0x00100000000665b0
- (id)activityItem;	// IMP=0x0010000000066547
- (_Bool)generatePreviewsInOperation:(id)arg1;	// IMP=0x0010000000139d6a
- (void)generateFallbackPDFWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013993a
- (void)generateFallbackPDFIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001398e1
- (_Bool)needToGeneratePreviews;	// IMP=0x00100000001392f7
- (_Bool)generatePreviewsDuringCloudActivity;	// IMP=0x00100000001392ef
@end

