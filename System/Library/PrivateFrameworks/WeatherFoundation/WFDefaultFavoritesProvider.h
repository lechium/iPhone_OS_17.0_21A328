//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject
{
    id <WFFavoriteLocationProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000001c1b
@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeLocation:(id)arg1;	// IMP=0x0000000000001bee
- (void)addLocation:(id)arg1;	// IMP=0x0000000000001be8
- (void)setLocations:(id)arg1;	// IMP=0x0000000000001be2
- (id)locationFromCity:(id)arg1;	// IMP=0x0000000000001af4
- (id)locations;	// IMP=0x00000000000017eb
- (_Bool)canProvideDefaultFavorites;	// IMP=0x00000000000017e3
- (id)init;	// IMP=0x00000000000017cd
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;	// IMP=0x0000000000001752

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

