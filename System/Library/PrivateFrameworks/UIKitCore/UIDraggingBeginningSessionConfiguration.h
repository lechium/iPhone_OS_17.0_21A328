//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDraggingSessionConfiguration.h"

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration
{
    long long _dataOwner;	// 184 = 0xb8
    UIView *_sourceView;	// 192 = 0xc0
    NSArray *_items;	// 200 = 0xc8
    struct CAPoint3D _initialCentroidInSourceWindow;	// 208 = 0xd0
}

+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 pointerTouch:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;	// IMP=0x006000000133f11c
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(struct CAPoint3D)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6;	// IMP=0x006000000133efa5
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;	// IMP=0x006000000133e951
- (void).cxx_destruct;	// IMP=0x000000000133f3b3
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct CAPoint3D initialCentroidInSourceWindow; // @synthesize initialCentroidInSourceWindow=_initialCentroidInSourceWindow;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) long long dataOwner; // @synthesize dataOwner=_dataOwner;
- (id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4;	// IMP=0x000000000133e3c4

@end
