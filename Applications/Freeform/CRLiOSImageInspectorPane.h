//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLiOSInspectorButtonCell, UIButton;

@interface CRLiOSImageInspectorPane
{
    UIButton *_resetMaskButton;	// 8 = 0x8
    UIButton *_editMaskButton;	// 16 = 0x10
    CRLiOSInspectorButtonCell *_replaceImageCell;	// 24 = 0x18
    CRLiOSInspectorButtonCell *_descriptionCell;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000005909be
@property(retain, nonatomic) CRLiOSInspectorButtonCell *p_descriptionCell; // @synthesize p_descriptionCell=_descriptionCell;
@property(retain, nonatomic) CRLiOSInspectorButtonCell *p_replaceImageCell; // @synthesize p_replaceImageCell=_replaceImageCell;
@property(retain, nonatomic) UIButton *p_editMaskButton; // @synthesize p_editMaskButton=_editMaskButton;
@property(retain, nonatomic) UIButton *p_resetMaskButton; // @synthesize p_resetMaskButton=_resetMaskButton;
- (void)p_updateButtonState;	// IMP=0x001000000059081e
- (id)p_cellsForMoreImageOptionsSection;	// IMP=0x001000000059036c
- (void)p_showDescriptionUI:(id)arg1;	// IMP=0x00100000005902e7
- (id)p_cellForMaskImageSection;	// IMP=0x001000000058ff33
- (id)p_imageRep;	// IMP=0x001000000058fdf1
- (void)p_maskEditModeDidChange:(id)arg1;	// IMP=0x001000000058fda5
- (id)p_imageEditor;	// IMP=0x001000000058fd93
- (void)showReplaceUI:(id)arg1;	// IMP=0x001000000058fa4a
- (void)resetImageMask:(id)arg1;	// IMP=0x001000000058f7ef
- (void)editImageMask:(id)arg1;	// IMP=0x001000000058f565
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000058f4da
- (_Bool)wantsRefreshForChangeRecord:(id)arg1;	// IMP=0x001000000058f383
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;	// IMP=0x001000000058f2c5
- (id)sectionCellArrays;	// IMP=0x001000000058f1d9
- (id)paneIdentifier;	// IMP=0x001000000058f1cc
- (void)dealloc;	// IMP=0x001000000058f0c1
- (id)initWithEditor:(id)arg1;	// IMP=0x001000000058edb7

@end

