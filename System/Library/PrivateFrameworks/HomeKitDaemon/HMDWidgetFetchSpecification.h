//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDWidgetFetchSpecification : HMFObject
{
    NSString *_name;	// 8 = 0x8
    NSSet *_serviceTypes;	// 16 = 0x10
    NSSet *_associatedServiceTypes;	// 24 = 0x18
    NSSet *_characteristicTypes;	// 32 = 0x20
    NSSet *_affectedWidgetKinds;	// 40 = 0x28
}

+ (id)mainHomeInteractiveFetchSpecifications;	// IMP=0x004000000021aa0d
+ (id)allOtherHomesSingleAccessorySecurityFetchSpecifications;	// IMP=0x004000000021a6d3
+ (id)mainHomeSecurityFetchSpecifications;	// IMP=0x004000000021a00a
+ (id)lightsFetchSpecifications;	// IMP=0x0040000000219cfc
+ (id)allHomeWidgetKinds;	// IMP=0x0040000000219c2d
- (void).cxx_destruct;	// IMP=0x0000000000219bc9
@property(readonly, copy) NSSet *affectedWidgetKinds; // @synthesize affectedWidgetKinds=_affectedWidgetKinds;
@property(readonly, copy) NSSet *characteristicTypes; // @synthesize characteristicTypes=_characteristicTypes;
@property(readonly, copy) NSSet *associatedServiceTypes; // @synthesize associatedServiceTypes=_associatedServiceTypes;
@property(readonly, copy) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)attributeDescriptions;	// IMP=0x0000000000219989
- (id)initWithName:(id)arg1 serviceTypes:(id)arg2 associatedServiceTypes:(id)arg3 characteristicTypes:(id)arg4 affectedWidgetKinds:(id)arg5;	// IMP=0x000000000021980d

@end

