//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLAccessibilitySafeCategory : NSObject
{
}

+ (void)_crlaxInstallSafeCategoryOnClass:(Class)arg1;	// IMP=0x004000000014f912
+ (void)_crlaxInstallSafeCategoryOnClassNamed:(id)arg1;	// IMP=0x001000000014f840
+ (void)_crlaxAddCategoryMethod:(struct objc_method *)arg1 toClass:(Class)arg2 isClass:(_Bool)arg3;	// IMP=0x001000000014f682
+ (void)_crlaxInitializeSafeCategory;	// IMP=0x001000000014f651
+ (void)crlaxAddSafeCategoryDependenciesToCollection:(id)arg1;	// IMP=0x001000000014f64b
+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x001000000014f63a
+ (Class)crlaxTargetClass;	// IMP=0x001000000014f620
+ (id)crlaxTargetClassName;	// IMP=0x001000000014f618

@end

