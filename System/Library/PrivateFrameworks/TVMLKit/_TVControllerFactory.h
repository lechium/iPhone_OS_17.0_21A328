//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVControllerFactory : NSObject
{
}

- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bebd
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bddf
- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bd0b
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bbaf
- (id)_carouselControllerForElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;	// IMP=0x000000000002ba9e
- (void)_registerControllerCreators;	// IMP=0x000000000002b687
- (id)init;	// IMP=0x000000000002b63b

@end
