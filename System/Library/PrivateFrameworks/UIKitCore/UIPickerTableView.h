//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableView.h"

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView
{
    struct CGRect _selectionBarRect;	// 136 = 0x88
    long long _selectionBarRow;	// 168 = 0xa8
    NSMutableIndexSet *_checkedRows;	// 176 = 0xb0
    double _lastClickedOffset;	// 184 = 0xb8
    long long _lastSelectedRow;	// 192 = 0xc0
    UIColor *_textColor;	// 200 = 0xc8
    struct CGRect _visibleRect;	// 208 = 0xd0
    NSMutableArray *_referencingCells;	// 240 = 0xf0
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;	// 248 = 0xf8
    _Bool _playsFeedback;	// 252 = 0xfc
    _Bool _generatorActivated;	// 253 = 0xfd
}

+ (_Bool)_isInternalTableView;	// IMP=0x0010000000f97886
- (void).cxx_destruct;	// IMP=0x0000000000f9a037
@property(nonatomic) _Bool generatorActivated; // @synthesize generatorActivated=_generatorActivated;
@property(getter=_playsFeedback, setter=_setPlaysFeedback:) _Bool playsFeedback; // @synthesize playsFeedback=_playsFeedback;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
- (_Bool)_shouldWrapCells;	// IMP=0x0000000000f99fab
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000f99e9a
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000f99d09
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000f99c92
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000000f99c8a
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000f99c78
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000f99c4a
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000f99ba9
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;	// IMP=0x0000000000f99b97
- (void)_deactivateFeedbackGeneratorIfNeeded;	// IMP=0x0000000000f99b17
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000f99a10
- (void)_scrollingFinished;	// IMP=0x0000000000f99905
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000f99866
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000f995a2
- (_Bool)_beginTrackingWithEvent:(id)arg1;	// IMP=0x0000000000f9955a
- (_Bool)isRowChecked:(long long)arg1;	// IMP=0x0000000000f9953d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000f9945e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000f9937f
@property(nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
- (void)_playClickIfNecessary;	// IMP=0x0000000000f990a2
- (id)_containerView;	// IMP=0x0000000000f9900d
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000f98fd1
- (id)_anyDateLabel;	// IMP=0x0000000000f98f1a
- (void)layoutSubviews;	// IMP=0x0000000000f98b4e
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000f98b37
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000f98880
- (void)_notifyContentOffsetChange;	// IMP=0x0000000000f98834
- (struct CATransform3D)_transformForCellAtY:(double)arg1;	// IMP=0x0000000000f98716
- (long long)_contentInsetAdjustmentBehavior;	// IMP=0x0000000000f9870b
- (void)_updateContentInsets;	// IMP=0x0000000000f9855e
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x0000000000f9851d
- (_Bool)didSelectDisabled:(_Bool)arg1;	// IMP=0x0000000000f984f6
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;	// IMP=0x0000000000f97f55
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000000f97f3d
- (id)_checkedRows;	// IMP=0x0000000000f97efc
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000f97de1
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000f97d81
- (void)dealloc;	// IMP=0x0000000000f97bf8
- (id)_pickerView;	// IMP=0x0000000000f97b73
- (struct CGRect)_visibleBounds;	// IMP=0x0000000000f97af3
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;	// IMP=0x0000000000f9788e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

