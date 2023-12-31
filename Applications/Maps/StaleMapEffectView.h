//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class MKMapView;

@interface StaleMapEffectView : UIImageView
{
    MKMapView *_mapView;	// 8 = 0x8
}

+ (id)dimmingOverlayForView:(id)arg1;	// IMP=0x0040000000ac452b
+ (double)_dimmingAlphaForUserInterfaceStyle:(long long)arg1;	// IMP=0x0010000000ac44fa
- (void).cxx_destruct;	// IMP=0x0020000000ac4743
- (void)_addDimmingEffect;	// IMP=0x0010000000ac44a4
- (id)_mapSnapshotImage;	// IMP=0x0010000000ac443c
- (id)_mapRepresentationImage:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ac423b
- (void)_updateImage;	// IMP=0x0010000000ac41ef
- (void)setAlpha:(double)arg1;	// IMP=0x0010000000ac4152
- (id)initWithMapView:(id)arg1 applyDimmingEffect:(_Bool)arg2;	// IMP=0x0010000000ac406c

@end

