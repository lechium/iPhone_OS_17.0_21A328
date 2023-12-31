//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKTableViewCell.h"

@class GEOComposedRouteAdvisoryItem, NSString, UIImageView, UIStackView;
@protocol IncidentExtendedDetailCellDelegate;

__attribute__((visibility("hidden")))
@interface MKIncidentExtendedDetailCell : MKTableViewCell
{
    UIStackView *_stackView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    GEOComposedRouteAdvisoryItem *_advisoryItem;	// 24 = 0x18
    id <IncidentExtendedDetailCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009eede
@property(nonatomic) __weak id <IncidentExtendedDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x000000000009ee43
- (void)_setConstraints;	// IMP=0x000000000009e969
- (id)customBodyTextView;	// IMP=0x000000000009e6ab
- (void)_didTapActionButton;	// IMP=0x000000000009e5cd
- (void)configureWithAdvisoryItem:(id)arg1;	// IMP=0x000000000009d85a
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000009d5a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

