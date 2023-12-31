//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTDynamicTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000016718e
+ (id)_propertyClasses;	// IMP=0x0060000000167015
- (void).cxx_destruct;	// IMP=0x0000000000167303
- (id)identifier;	// IMP=0x00000000001672ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000167297
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001671f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167196
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000167096
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000166b49
- (id)_delegatePath;	// IMP=0x0000000000166b41
- (id)_declaringBundleBookmark;	// IMP=0x0000000000166b39
- (id)_localizedDescription;	// IMP=0x0000000000166b31
- (_Bool)isChildOfTypeIdentifier:(id)arg1;	// IMP=0x0000000000166a5d
- (id)childTypeIdentifiers;	// IMP=0x0000000000166a44
- (id)parentTypeIdentifiers;	// IMP=0x00000000001669d3
- (void)_LSRecord_resolve_pedigree;	// IMP=0x00000000001669b8
- (id)pedigree;	// IMP=0x00000000001669a7
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000166946
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x0000000000166866
- (id)referenceURL;	// IMP=0x000000000016685e
- (id)preferredTagOfClass:(id)arg1;	// IMP=0x000000000016683e
- (id)tagSpecification;	// IMP=0x00000000001667cd
- (id)declaration;	// IMP=0x00000000001666c6
- (id)declaringBundleRecord;	// IMP=0x00000000001666be
- (_Bool)isCoreType;	// IMP=0x00000000001666b6
- (_Bool)isActive;	// IMP=0x00000000001666ae
- (_Bool)isImported;	// IMP=0x00000000001666a6
- (_Bool)isExported;	// IMP=0x000000000016669e
- (_Bool)isInPublicDomain;	// IMP=0x0000000000166696
- (_Bool)isWildcard;	// IMP=0x000000000016668e
- (_Bool)isDeclared;	// IMP=0x0000000000166686
- (_Bool)isDynamic;	// IMP=0x000000000016667e
- (id)version;	// IMP=0x0000000000166676
- (id)_initWithContext:(struct LSContext *)arg1 dynamicUTI:(id)arg2;	// IMP=0x00000000001665dc

@end

