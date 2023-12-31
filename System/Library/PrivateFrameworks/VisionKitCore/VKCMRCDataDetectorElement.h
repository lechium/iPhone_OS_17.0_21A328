//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSSecureCoding-Protocol.h>

@class BCSAction, NSArray, NSString, UIMenu, UIViewController, VKQuad, VNBarcodeObservation;

__attribute__((visibility("hidden")))
@interface VKCMRCDataDetectorElement <NSSecureCoding>
{
    _Bool _childrenCreated;	// 8 = 0x8
    NSArray *_boundingQuads;	// 16 = 0x10
    unsigned long long _dataDetectorTypes;	// 24 = 0x18
    VKQuad *_quad;	// 32 = 0x20
    NSArray *_children;	// 40 = 0x28
    VNBarcodeObservation *_barcodeObservation;	// 48 = 0x30
    BCSAction *_barcodeAction;	// 56 = 0x38
    UIViewController *_presentingViewControllerForMrcAction;	// 64 = 0x40
    struct CGRect _boundingBox;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000643f4
- (void).cxx_destruct;	// IMP=0x0000000000064728
@property(nonatomic) _Bool childrenCreated; // @synthesize childrenCreated=_childrenCreated;
@property(nonatomic) __weak UIViewController *presentingViewControllerForMrcAction; // @synthesize presentingViewControllerForMrcAction=_presentingViewControllerForMrcAction;
@property(retain, nonatomic) BCSAction *barcodeAction; // @synthesize barcodeAction=_barcodeAction;
@property(retain, nonatomic) VNBarcodeObservation *barcodeObservation; // @synthesize barcodeObservation=_barcodeObservation;
- (id)children;	// IMP=0x0000000000064680
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) VKQuad *quad; // @synthesize quad=_quad;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (id)presentingViewControllerForAction:(id)arg1;	// IMP=0x0000000000064524
- (id)stringValue;	// IMP=0x000000000006450a
- (_Bool)isMRCDataDetector;	// IMP=0x0000000000064502
- (id)boundingQuads;	// IMP=0x00000000000643fc
- (id)scannerResult;	// IMP=0x00000000000643ec
@property(readonly, nonatomic) UIMenu *mrcMenu;
- (void)createChildrenIfNecessary;	// IMP=0x0000000000063d37
- (id)debugMenu;	// IMP=0x00000000000637af
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000063657
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000635a9
- (id)initWithBarcodeObservation:(id)arg1 action:(id)arg2;	// IMP=0x00000000000633f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

