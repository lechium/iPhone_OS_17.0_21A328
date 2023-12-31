//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, NSString, RAPCorrectableEntryPoints, UISegmentedControl;

@interface RAPEditLocationViewController
{
    struct CLLocationCoordinate2D _lastEditLocationCoordinate;	// 96 = 0x60
    _Bool _allowEditingEntryPoints;	// 112 = 0x70
    NSString *_navigationTitle;	// 120 = 0x78
    BackgroundColorButton *_addButton;	// 128 = 0x80
    UISegmentedControl *_editModeSegmentedControl;	// 136 = 0x88
    RAPCorrectableEntryPoints *_correctableEntryPoints;	// 144 = 0x90
    CDUnknownBlockType _selectionHandler;	// 152 = 0x98
    CDUnknownBlockType _cancelSelectionHandler;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000001c3dec
@property(copy, nonatomic) CDUnknownBlockType cancelSelectionHandler; // @synthesize cancelSelectionHandler=_cancelSelectionHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
// Error: Property attributes should begin with the type ('T') attribute, property name: correctableEntryPoints
// Property attributes: (null)

@property(retain, nonatomic) UISegmentedControl *editModeSegmentedControl; // @synthesize editModeSegmentedControl=_editModeSegmentedControl;
@property(retain, nonatomic) BackgroundColorButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (void)editLocationMapView:(id)arg1 didChangeViewMode:(long long)arg2;	// IMP=0x00100000001c3cba
- (void)editLocationMapViewFinishedZoomingOut:(id)arg1;	// IMP=0x00100000001c3c59
- (void)editLocationMapViewFinishedZoomingIn:(id)arg1;	// IMP=0x00100000001c3bf8
- (void)editLocationMapViewFinishedPanning:(id)arg1;	// IMP=0x00100000001c3b97
- (_Bool)_isInEditLocationMode;	// IMP=0x00100000001c3b62
- (void)editLocationMapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00100000001c39bc
- (void)editEntryPointController:(id)arg1 willDismissWithViewMode:(long long)arg2;	// IMP=0x00100000001c3970
- (void)userDidRequestModificationOfEntryPoint:(id)arg1 withCoordinates:(struct CLLocationCoordinate2D)arg2 entryPointType:(long long)arg3;	// IMP=0x00100000001c3880
- (id)userDidRequestCreationOfEntryPointWithCoordinates:(struct CLLocationCoordinate2D)arg1 entryPointType:(long long)arg2;	// IMP=0x00100000001c37a0
- (void)userDidRequestDeletionOfEntryPoint:(id)arg1;	// IMP=0x00100000001c36d3
- (void)_presentEntryPointEditor:(id)arg1;	// IMP=0x00100000001c35b2
- (void)addEntryPoint;	// IMP=0x00100000001c3494
- (void)selectedEditModeDidChange:(id)arg1;	// IMP=0x00100000001c3073
- (void)reloadData;	// IMP=0x00100000001c2ecc
- (void)didTapDone;	// IMP=0x00100000001c2d7b
- (void)didTapCancel;	// IMP=0x00100000001c2cc5
- (void)editLocationMapView:(id)arg1 didChangeCenterCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00100000001c2bce
@property(readonly, nonatomic) int analyticTarget;
- (void)setupConstraints;	// IMP=0x00100000001c206c
- (void)viewDidLoad;	// IMP=0x00100000001c17bf
- (id)initWithInitialCoordinates:(struct CLLocationCoordinate2D)arg1 inMapRect:(CDStruct_02837cd9)arg2 analyticsTarget:(int)arg3 markerViewAttributes:(id)arg4 allowEditingEntryPoints:(_Bool)arg5 correctableEntryPoints:(id)arg6 selectionHandler:(CDUnknownBlockType)arg7 cancelSelectionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000001c167c

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

