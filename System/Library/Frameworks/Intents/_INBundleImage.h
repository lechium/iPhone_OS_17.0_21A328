//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class INImageBundle, NSString;

__attribute__((visibility("hidden")))
@interface _INBundleImage : INImage
{
    NSString *_imageName;	// 8 = 0x8
    INImageBundle *_imageBundle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002edfad
- (void).cxx_destruct;	// IMP=0x00000000002edf7c
@property(copy, nonatomic) INImageBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ede49
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002eddaa
- (_Bool)_isSystem;	// IMP=0x00000000002edd61
- (void)_setBundleIdentifier:(id)arg1;	// IMP=0x00000000002edcf8
- (id)_bundleIdentifier;	// IMP=0x00000000002edca8
- (void)_setBundlePath:(id)arg1;	// IMP=0x00000000002edc3f
- (id)_bundlePath;	// IMP=0x00000000002edbef
- (void)_setName:(id)arg1;	// IMP=0x00000000002edbdd
- (id)_name;	// IMP=0x00000000002edbcb
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x00000000002edac1
- (id)_dictionaryRepresentation;	// IMP=0x00000000002ed997
- (_Bool)_requiresRetrieval;	// IMP=0x00000000002ed98f
- (id)_identifier;	// IMP=0x00000000002ed97d
- (id)stringRepresentation;	// IMP=0x00000000002ed755
- (id)initWithStringRepresentation:(id)arg1;	// IMP=0x00000000002ed6fb
- (id)_URLRepresentation;	// IMP=0x00000000002ed698
- (id)_initWithURLRepresentation:(id)arg1;	// IMP=0x00000000002ed0b8
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b610a

@end
