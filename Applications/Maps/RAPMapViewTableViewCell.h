//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class BlurredBackgroundLabel, MKMapView, RAPInlineMapViewModel;

@interface RAPMapViewTableViewCell : UITableViewCell
{
    BlurredBackgroundLabel *_descriptionBackgroundView;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
    RAPInlineMapViewModel *_viewModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001ebaee
- (void)layoutSubviews;	// IMP=0x00100000001eb959
- (void)setupConstraints;	// IMP=0x00100000001eb37a
- (void)setupSubviews;	// IMP=0x00100000001eb167
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 viewModel:(id)arg3;	// IMP=0x00100000001eafd8

@end

