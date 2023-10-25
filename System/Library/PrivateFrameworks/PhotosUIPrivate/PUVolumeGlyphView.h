//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, CAStateController, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUVolumeGlyphView : UIView
{
    CALayer *_glyphLayer;	// 8 = 0x8
    CAStateController *_stateController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_loadingQueue;	// 24 = 0x18
    NSString *_stateName;	// 32 = 0x20
}

+ (id)classSubstitions;	// IMP=0x0010000000427c78
- (void).cxx_destruct;	// IMP=0x0000000000427a7e
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;	// IMP=0x00000000004279ee
- (void)layoutSubviews;	// IMP=0x0000000000427889
- (void)_handleGlyphLayerDidLoad:(id)arg1;	// IMP=0x000000000042775a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000042764f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
