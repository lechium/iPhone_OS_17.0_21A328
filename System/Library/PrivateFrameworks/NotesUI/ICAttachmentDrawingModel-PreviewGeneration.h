//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentDrawingModel.h>

@class UIImage;

@interface ICAttachmentDrawingModel (PreviewGeneration)
- (_Bool)generatePreviewsInOperation:(id)arg1;	// IMP=0x00300000001017d6
- (_Bool)needToGeneratePreviews;	// IMP=0x0030000000100ba7
- (_Bool)generatePreviewsDuringCloudActivity;	// IMP=0x0030000000100b9f
- (void)drawPreviewInRect:(struct CGRect)arg1;	// IMP=0x003000000011ca3e
- (_Bool)canConvertToHTMLForSharing;	// IMP=0x003000000011ca36
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;	// IMP=0x003000000011c8ae
- (id)dataForTypeIdentifier:(id)arg1;	// IMP=0x003000000011c6df
- (id)fileURLForTypeIdentifier:(id)arg1;	// IMP=0x003000000011c5ec
- (id)providerFileTypes;	// IMP=0x003000000011c563
- (id)providerDataTypes;	// IMP=0x003000000011c4da
- (id)activityItems;	// IMP=0x003000000011c3c6
- (id)activityItem;	// IMP=0x003000000011c35d
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)saveDrawing:(id)arg1 withImage:(id)arg2 forImageDrawing:(id)arg3;	// IMP=0x003000000011b14d
- (CDUnknownBlockType)genericBrickThumbnailCreator;	// IMP=0x003000000011b145
- (CDUnknownBlockType)genericListThumbnailCreator;	// IMP=0x003000000011b13d
@end

