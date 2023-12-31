//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLCompileOptions.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal : MTLCompileOptions
{
    _Bool _userSetLanguageVersion;	// 8 = 0x8
    NSDictionary *_preprocessorMacros;	// 16 = 0x10
    _Bool _fastMathEnabled;	// 24 = 0x18
    _Bool _glBufferBindPoints;	// 25 = 0x19
    _Bool _tracingEnabled;	// 26 = 0x1a
    _Bool _debuggingEnabled;	// 27 = 0x1b
    unsigned long long _languageVersion;	// 32 = 0x20
    _Bool _compileTimeStatisticsEnabled;	// 40 = 0x28
    NSString *_additionalCompilerArguments;	// 48 = 0x30
    unsigned char _sourceLanguage;	// 56 = 0x38
    long long _libraryType;	// 64 = 0x40
    NSArray *_libraries;	// 72 = 0x48
    NSString *_installName;	// 80 = 0x50
    _Bool _preserveInvariance;	// 88 = 0x58
    long long _optimizationLevel;	// 96 = 0x60
    long long _compileSymbolVisibility;	// 104 = 0x68
    _Bool _allowReferencingUndefinedSymbols;	// 112 = 0x70
    unsigned long long _maxTotalThreadsPerThreadgroup;	// 120 = 0x78
}

- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x00000000000d0f32
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x00000000000d0f21
- (void)setAllowReferencingUndefinedSymbols:(_Bool)arg1;	// IMP=0x00000000000d0f11
- (_Bool)allowReferencingUndefinedSymbols;	// IMP=0x00000000000d0f01
- (void)setCompileSymbolVisibility:(long long)arg1;	// IMP=0x00000000000d0ef0
- (long long)compileSymbolVisibility;	// IMP=0x00000000000d0edf
- (void)setOptimizationLevel:(long long)arg1;	// IMP=0x00000000000d0ece
- (long long)optimizationLevel;	// IMP=0x00000000000d0ebd
- (void)setPreserveInvariance:(_Bool)arg1;	// IMP=0x00000000000d0ead
- (_Bool)preserveInvariance;	// IMP=0x00000000000d0e9d
- (void)setInstallName:(id)arg1;	// IMP=0x00000000000d0e8c
- (id)installName;	// IMP=0x00000000000d0e7b
- (void)setLibraryType:(long long)arg1;	// IMP=0x00000000000d0e6a
- (long long)libraryType;	// IMP=0x00000000000d0e59
- (void)setSourceLanguage:(unsigned char)arg1;	// IMP=0x00000000000d0e49
- (unsigned char)sourceLanguage;	// IMP=0x00000000000d0e38
- (void)setCompileTimeStatisticsEnabled:(_Bool)arg1;	// IMP=0x00000000000d0e28
- (_Bool)compileTimeStatisticsEnabled;	// IMP=0x00000000000d0e18
- (void)setTracingEnabled:(_Bool)arg1;	// IMP=0x00000000000d0e08
- (_Bool)tracingEnabled;	// IMP=0x00000000000d0df8
- (unsigned long long)languageVersion;	// IMP=0x00000000000d0de7
- (void)setGlBufferBindPoints:(_Bool)arg1;	// IMP=0x00000000000d0dd7
- (_Bool)glBufferBindPoints;	// IMP=0x00000000000d0dc7
- (void)setDebuggingEnabled:(_Bool)arg1;	// IMP=0x00000000000d0db7
- (_Bool)debuggingEnabled;	// IMP=0x00000000000d0da7
- (void)setFastMathEnabled:(_Bool)arg1;	// IMP=0x00000000000d0d97
- (_Bool)fastMathEnabled;	// IMP=0x00000000000d0d87
- (void)importDictionary:(id)arg1;	// IMP=0x00000000000d09a4
- (id)exportDictionary;	// IMP=0x00000000000d0598
- (id)description;	// IMP=0x00000000000d0584
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000d00aa
- (void)setLanguageVersion:(unsigned long long)arg1;	// IMP=0x00000000000d008e
- (void)setAdditionalCompilerArguments:(id)arg1;	// IMP=0x00000000000d0049
- (id)additionalCompilerArguments;	// IMP=0x00000000000d0038
- (void)setPreprocessorMacros:(id)arg1;	// IMP=0x00000000000cfff3
- (id)preprocessorMacros;	// IMP=0x00000000000cffe2
- (void)setLibraries:(id)arg1;	// IMP=0x00000000000cff9d
- (id)libraries;	// IMP=0x00000000000cff8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cfe06
- (unsigned long long)hash;	// IMP=0x00000000000cfc94
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cfaa7
- (void)dealloc;	// IMP=0x00000000000cfa33
- (id)init;	// IMP=0x00000000000cf92e

@end

