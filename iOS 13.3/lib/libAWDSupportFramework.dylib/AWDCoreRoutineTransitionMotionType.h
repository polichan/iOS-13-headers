/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineTransitionMotionType : PBCodable <NSCopying> {
    unsigned int  _coreRoutineTransitionMotionTypeAutomotive;
    unsigned int  _coreRoutineTransitionMotionTypeCycling;
    unsigned int  _coreRoutineTransitionMotionTypeRunning;
    unsigned int  _coreRoutineTransitionMotionTypeStationary;
    unsigned int  _coreRoutineTransitionMotionTypeUnknown;
    unsigned int  _coreRoutineTransitionMotionTypeWalking;
    struct { 
        unsigned int coreRoutineTransitionMotionTypeAutomotive : 1; 
        unsigned int coreRoutineTransitionMotionTypeCycling : 1; 
        unsigned int coreRoutineTransitionMotionTypeRunning : 1; 
        unsigned int coreRoutineTransitionMotionTypeStationary : 1; 
        unsigned int coreRoutineTransitionMotionTypeUnknown : 1; 
        unsigned int coreRoutineTransitionMotionTypeWalking : 1; 
    }  _has;
}

@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeCycling;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeRunning;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeStationary;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeUnknown;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeWalking;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeCycling;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeRunning;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeStationary;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeUnknown;
@property (nonatomic) bool hasCoreRoutineTransitionMotionTypeWalking;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)coreRoutineTransitionMotionTypeAutomotive;
- (unsigned int)coreRoutineTransitionMotionTypeCycling;
- (unsigned int)coreRoutineTransitionMotionTypeRunning;
- (unsigned int)coreRoutineTransitionMotionTypeStationary;
- (unsigned int)coreRoutineTransitionMotionTypeUnknown;
- (unsigned int)coreRoutineTransitionMotionTypeWalking;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoreRoutineTransitionMotionTypeAutomotive;
- (bool)hasCoreRoutineTransitionMotionTypeCycling;
- (bool)hasCoreRoutineTransitionMotionTypeRunning;
- (bool)hasCoreRoutineTransitionMotionTypeStationary;
- (bool)hasCoreRoutineTransitionMotionTypeUnknown;
- (bool)hasCoreRoutineTransitionMotionTypeWalking;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoreRoutineTransitionMotionTypeAutomotive:(unsigned int)arg1;
- (void)setCoreRoutineTransitionMotionTypeCycling:(unsigned int)arg1;
- (void)setCoreRoutineTransitionMotionTypeRunning:(unsigned int)arg1;
- (void)setCoreRoutineTransitionMotionTypeStationary:(unsigned int)arg1;
- (void)setCoreRoutineTransitionMotionTypeUnknown:(unsigned int)arg1;
- (void)setCoreRoutineTransitionMotionTypeWalking:(unsigned int)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeAutomotive:(bool)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeCycling:(bool)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeRunning:(bool)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeStationary:(bool)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeUnknown:(bool)arg1;
- (void)setHasCoreRoutineTransitionMotionTypeWalking:(bool)arg1;
- (void)writeTo:(id)arg1;

@end