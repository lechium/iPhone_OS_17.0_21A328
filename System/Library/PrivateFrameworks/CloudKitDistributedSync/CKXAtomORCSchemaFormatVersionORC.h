//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORC : NSObject
{
    CKXAtomBindingImplementation *_binding;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d5046
@property(readonly, nonatomic) CKXAtomBindingImplementation *binding; // @synthesize binding=_binding;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000d4f05
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d4e51
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d4d72
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000d4c94
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000d4abf
- (id)generateSchema;	// IMP=0x00000000000d4881
- (id)initWithBinding:(id)arg1;	// IMP=0x00000000000d4802

@end

