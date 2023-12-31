//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MKMapView, NSString, _TtC4Maps31RAPNotificationDetailsViewModel;

@interface RAPNotificationDetailsMapCell : UICollectionViewCell
{
    _TtC4Maps31RAPNotificationDetailsViewModel *_viewModel;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x0020000000c5f390
- (void).cxx_destruct;	// IMP=0x0020000000c60747
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) _TtC4Maps31RAPNotificationDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0010000000c60612
- (void)_updateMapView;	// IMP=0x0010000000c5fc9f
- (_Bool)_showsSingleMarker;	// IMP=0x0010000000c5fc0c
- (void)_setupConstraints;	// IMP=0x0010000000c5f7bb
- (void)_setupViews;	// IMP=0x0010000000c5f479
- (void)_commonInit;	// IMP=0x0010000000c5f44b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000c5f3ff
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000c5f3a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

