//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

__attribute__((visibility("hidden")))
@interface _ISCompositorElement : NSObject
{
    id <ISCompositorRecipe> _recipe;	// 8 = 0x8
    NSMutableDictionary *_resourceByName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000175c5
@property(readonly) NSMutableDictionary *resourceByName; // @synthesize resourceByName=_resourceByName;
@property(retain) id <ISCompositorRecipe> recipe; // @synthesize recipe=_recipe;
- (id)resourceNamed:(id)arg1;	// IMP=0x0000000000017514
- (void)clearResources;	// IMP=0x00000000000174db
- (void)addResourcesFromDictionary:(id)arg1;	// IMP=0x0000000000017472
- (void)setResource:(id)arg1 forName:(id)arg2;	// IMP=0x00000000000173ce
@property(readonly) id <ISCompositorResourceProvider> resourceProvider;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;	// IMP=0x0000000000017309
- (id)init;	// IMP=0x0000000000017294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

