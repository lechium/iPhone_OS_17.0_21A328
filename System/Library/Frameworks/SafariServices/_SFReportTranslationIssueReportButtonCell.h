//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton;
@protocol _SFReportTranslationIssueReportButtonCellDelegate;

__attribute__((visibility("hidden")))
@interface _SFReportTranslationIssueReportButtonCell : UICollectionViewCell
{
    id <_SFReportTranslationIssueReportButtonCellDelegate> _delegate;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x00400000001464f4
- (void).cxx_destruct;	// IMP=0x0000000000146a83
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <_SFReportTranslationIssueReportButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reportTranslationIssue:(id)arg1;	// IMP=0x00000000001469f4
- (void)setBackgroundColorForEnabledState:(_Bool)arg1;	// IMP=0x000000000014692a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000146501

@end

