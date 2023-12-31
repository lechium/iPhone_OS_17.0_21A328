//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer, CLCircularRegion, MKCircle, MKMapView, NSMeasurementFormatter, UIColor, UIImageView;
@protocol TTRIReminderLocationPickerMapDragRadiusViewDelegate;

@interface TTRIReminderLocationPickerMapDragRadiusView : UIView
{
    _Bool _isMinimum;	// 8 = 0x8
    _Bool _isMaximum;	// 9 = 0x9
    _Bool _isDragging;	// 10 = 0xa
    MKMapView *_mapView;	// 16 = 0x10
    id <TTRIReminderLocationPickerMapDragRadiusViewDelegate> _delegate;	// 24 = 0x18
    NSMeasurementFormatter *_measurementFormatter;	// 32 = 0x20
    double _minimumRadius;	// 40 = 0x28
    double _maximumRadius;	// 48 = 0x30
    double _radiusPaddingMultiplier;	// 56 = 0x38
    UIColor *_circleColor;	// 64 = 0x40
    UIColor *_handleColor;	// 72 = 0x48
    UIImageView *_handleImageView;	// 80 = 0x50
    CAShapeLayer *_shapeLayer;	// 88 = 0x58
    CLCircularRegion *_region;	// 96 = 0x60
    MKCircle *_overlay;	// 104 = 0x68
    struct CGPoint _initialHandleCenterForDraggin;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000001085a
@property(nonatomic) struct CGPoint initialHandleCenterForDraggin; // @synthesize initialHandleCenterForDraggin=_initialHandleCenterForDraggin;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) MKCircle *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(nonatomic) _Bool isMaximum; // @synthesize isMaximum=_isMaximum;
@property(nonatomic) _Bool isMinimum; // @synthesize isMinimum=_isMinimum;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIImageView *handleImageView; // @synthesize handleImageView=_handleImageView;
@property(retain, nonatomic) UIColor *handleColor; // @synthesize handleColor=_handleColor;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) double radiusPaddingMultiplier; // @synthesize radiusPaddingMultiplier=_radiusPaddingMultiplier;
@property(nonatomic) double maximumRadius; // @synthesize maximumRadius=_maximumRadius;
@property(nonatomic) double minimumRadius; // @synthesize minimumRadius=_minimumRadius;
@property(retain, nonatomic) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
@property(nonatomic) __weak id <TTRIReminderLocationPickerMapDragRadiusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)_ttriAccessibilityUpdateWithRadius:(double)arg1;	// IMP=0x001000000001061c
- (double)_ttriAccessibilityRadiusIncrement;	// IMP=0x0010000000010547
- (double)_ttriAccessibilityRadiusByAdding:(double)arg1;	// IMP=0x0010000000010522
- (void)accessibilityDecrement;	// IMP=0x00100000000104d5
- (void)accessibilityIncrement;	// IMP=0x0010000000010488
- (unsigned long long)accessibilityTraits;	// IMP=0x0010000000010478
- (id)accessibilityValue;	// IMP=0x00100000000103f8
- (id)accessibilityLabel;	// IMP=0x00100000000103a0
- (struct CGRect)accessibilityFrame;	// IMP=0x0010000000010328
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000010320
- (void)_centerAndZoomToFitRegion:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000010192
- (_Bool)_usesMetric;	// IMP=0x00100000000100f3
- (id)_measurementFor:(double)arg1 fromUnit:(id)arg2 toUnit:(id)arg3 normalized:(_Bool)arg4;	// IMP=0x001000000000ffac
- (id)_currentHandleDistanceMeasurement;	// IMP=0x001000000000fee5
- (double)_radiusForPoint:(struct CGPoint)arg1;	// IMP=0x001000000000fdc5
- (double)_currentHandleDistance;	// IMP=0x001000000000fd56
- (struct CGPoint)_maxPoint;	// IMP=0x001000000000fd28
- (struct CGPoint)_minPoint;	// IMP=0x001000000000fcfa
- (struct CGPoint)_pointForRadius:(double)arg1;	// IMP=0x001000000000fbdd
- (void)_hideCircleAfterDelay;	// IMP=0x001000000000fb37
- (void)_removeHandle;	// IMP=0x001000000000faa1
- (void)_animateHandleIn:(_Bool)arg1;	// IMP=0x001000000000f4ca
- (id)_shapeLayerWithEndPoint:(struct CGPoint)arg1;	// IMP=0x001000000000f3e7
- (id)_bezierPathWithEndPoint:(struct CGPoint)arg1;	// IMP=0x001000000000f229
- (void)_popAnimateHandle;	// IMP=0x001000000000e82c
- (void)_updateRegionWithRadius:(double)arg1;	// IMP=0x001000000000e58a
- (void)_updateRegionWithPoint:(struct CGPoint)arg1;	// IMP=0x001000000000e49e
- (void)_updateHandleImageViewWithPoint:(struct CGPoint)arg1;	// IMP=0x001000000000e2ce
- (void)_updateHandleImageView;	// IMP=0x001000000000e164
@property(nonatomic) double radius;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000000df2e
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x001000000000df1c
- (void)stopEditing;	// IMP=0x001000000000de86
- (void)startEditingRegion:(id)arg1;	// IMP=0x001000000000dd0a
- (void)handlePanGesture:(id)arg1;	// IMP=0x001000000000dad3
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000000d9af
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x001000000000d3b7
- (_Bool)isOpaque;	// IMP=0x001000000000d3af
- (id)initWithFrame:(struct CGRect)arg1 mapView:(id)arg2;	// IMP=0x001000000000d12e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000d120

@end

