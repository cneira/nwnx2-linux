#ifndef _CNWSEFFECTLISTHANDLER_H_
#define _CNWSEFFECTLISTHANDLER_H_
#include "nwndef.h"

class CNWSEffectListHandler
{
public:
    void InitializeEffects();
    int OnApplyACDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyACIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyAbilityDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyAbilityIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyAppear(CNWSObject *, CGameEffect *, int);
    int OnApplyArcaneSpellFailure(CNWSObject *, CGameEffect *, int);
    int OnApplyAreaOfEffect(CNWSObject *, CGameEffect *, int);
    int OnApplyAttackDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyAttackIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyBeam(CNWSObject *, CGameEffect *, int);
    int OnApplyBlindnessInactive(CNWSObject *, CGameEffect *, int);
    int OnApplyBlindness(CNWSObject *, CGameEffect *, int);
    int OnApplyBonusFeat(CNWSObject *, CGameEffect *, int);
    int OnApplyBonusSpellOfLevel(CNWSObject *, CGameEffect *, int);
    int OnApplyConcealment(CNWSObject *, CGameEffect *, int);
    int OnApplyCurse(CNWSObject *, CGameEffect *, int);
    int OnApplyCutsceneGhost(CNWSObject *, CGameEffect *, int);
    int OnApplyCutsceneImmobile(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageImmunityDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageImmunityIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageReduction(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageResistance(CNWSObject *, CGameEffect *, int);
    int OnApplyDamageShield(CNWSObject *, CGameEffect *, int);
    int OnApplyDamage(CNWSObject *, CGameEffect *, int);
    int OnApplyDarkness(CNWSObject *, CGameEffect *, int);
    int OnApplyDeaf(CNWSObject *, CGameEffect *, int);
    int OnApplyDeath(CNWSObject *, CGameEffect *, int);
    int OnApplyDefensiveStance(CNWSObject *, CGameEffect *, int);
    int OnApplyDisappearAppear(CNWSObject *, CGameEffect *, int);
    int OnApplyDisappear(CNWSObject *, CGameEffect *, int);
    int OnApplyDisarm(CNWSObject *, CGameEffect *, int);
    int OnApplyDisease(CNWSObject *, CGameEffect *, int);
    int OnApplyDispelAllMagic(CNWSObject *, CGameEffect *, int);
    int OnApplyDispelBestMagic(CNWSObject *, CGameEffect *, int);
    int OnApplyEffectIcon(CNWSObject *, CGameEffect *, int);
    int OnApplyEffectImmunity(CNWSObject *, CGameEffect *, int);
    int OnApplyEnemyAttackBonus(CNWSObject *, CGameEffect *, int);
    int OnApplyEntangled(CNWSObject *, CGameEffect *, int);
    int OnApplyHasteInternal(CNWSObject *, CGameEffect *, int);
    int OnApplyHasteOrSlow(CNWSObject *, CGameEffect *, int);
    int OnApplyHeal(CNWSObject *, CGameEffect *, int);
    int OnApplyHitPointChangeWhenDying(CNWSObject *, CGameEffect *, int);
    int OnApplyInvisibility(CNWSObject *, CGameEffect *, int);
    int OnApplyItemProperty(CNWSObject *, CGameEffect *, int);
    int OnApplyKnockdown(CNWSObject *, CGameEffect *, int);
    int OnApplyLight(CNWSObject *, CGameEffect *, int);
    int OnApplyLimitMovementSpeed(CNWSObject *, CGameEffect *, int);
    int OnApplyLink(CNWSObject *, CGameEffect *, int);
    int OnApplyMissChance(CNWSObject *, CGameEffect *, int);
    int OnApplyModifyNumAttacks(CNWSObject *, CGameEffect *, int);
    int OnApplyMovementSpeedDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplyMovementSpeedIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyNegativeLevel(CNWSObject *, CGameEffect *, int);
    int OnApplyPetrify(CNWSObject *, CGameEffect *, int);
    int OnApplyPoison(CNWSObject *, CGameEffect *, int);
    int OnApplyPolymorph(CNWSObject *, CGameEffect *, int);
    int OnApplyRacialType(CNWSObject *, CGameEffect *, int);
    int OnApplyRegenerate(CNWSObject *, CGameEffect *, int);
    int OnApplyResurrection(CNWSObject *, CGameEffect *, int);
    int OnApplySanctuary(CNWSObject *, CGameEffect *, int);
    int OnApplySavingThrowDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplySavingThrowIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplySeeInvisible(CNWSObject *, CGameEffect *, int);
    int OnApplySetAIState(CNWSObject *, CGameEffect *, int);
    int OnApplySetStateInternal(CNWSObject *, CGameEffect *, int);
    int OnApplySetState(CNWSObject *, CGameEffect *, int);
    int OnApplySilence(CNWSObject *, CGameEffect *, int);
    int OnApplySkillDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplySkillIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplySlowInternal(CNWSObject *, CGameEffect *, int);
    int OnApplySpecialWalkAnimation(CNWSObject *, CGameEffect *, int);
    int OnApplySpellFailure(CNWSObject *, CGameEffect *, int);
    int OnApplySpellImmunity(CNWSObject *, CGameEffect *, int);
    int OnApplySpellLevelAbsorption(CNWSObject *, CGameEffect *, int);
    int OnApplySpellResistanceDecrease(CNWSObject *, CGameEffect *, int);
    int OnApplySpellResistanceIncrease(CNWSObject *, CGameEffect *, int);
    int OnApplyStore(CNWSObject *, CGameEffect *);
    int OnApplySummonCreature(CNWSObject *, CGameEffect *, int);
    int OnApplySwarm(CNWSObject *, CGameEffect *, int);
    int OnApplyTaunt(CNWSObject *, CGameEffect *, int);
    int OnApplyTemporaryHitpoints(CNWSObject *, CGameEffect *, int);
    int OnApplyTimestop(CNWSObject *, CGameEffect *, int);
    int OnApplyTrueSeeing(CNWSObject *, CGameEffect *, int);
    int OnApplyTurnResistance(CNWSObject *, CGameEffect *, int);
    int OnApplyUltraVision(CNWSObject *, CGameEffect *, int);
    int OnApplyVampiricRegeneration(CNWSObject *, CGameEffect *, int);
    int OnApplyVision(CNWSObject *, CGameEffect *, int);
    int OnApplyVisualEffect(CNWSObject *, CGameEffect *, int);
    int OnApplyWounding(CNWSObject *, CGameEffect *, int);
    int OnEffectApplied(CNWSObject *, CGameEffect *, int);
    int OnEffectRemoved(CNWSObject *, CGameEffect *);
    int OnRemoveACDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveACIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveAbilityDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveAbilityIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveArcaneSpellFailure(CNWSObject *, CGameEffect *);
    int OnRemoveAreaOfEffect(CNWSObject *, CGameEffect *);
    int OnRemoveAttackDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveAttackIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveBeam(CNWSObject *, CGameEffect *);
    int OnRemoveBlindness(CNWSObject *, CGameEffect *);
    int OnRemoveBonusFeat(CNWSObject *, CGameEffect *);
    int OnRemoveBonusSpellOfLevel(CNWSObject *, CGameEffect *);
    int OnRemoveConcealment(CNWSObject *, CGameEffect *);
    int OnRemoveCurse(CNWSObject *, CGameEffect *);
    int OnRemoveCutsceneGhost(CNWSObject *, CGameEffect *);
    int OnRemoveDamageDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveDamageImmunityDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveDamageImmunityIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveDamageIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveDamageShield(CNWSObject *, CGameEffect *);
    int OnRemoveDarkness(CNWSObject *, CGameEffect *);
    int OnRemoveDisappearAppear(CNWSObject *, CGameEffect *);
    int OnRemoveDisarm(CNWSObject *, CGameEffect *);
    int OnRemoveEffectIcon(CNWSObject *, CGameEffect *);
    int OnRemoveEffectImmunity(CNWSObject *, CGameEffect *);
    int OnRemoveEnemyAttackBonus(CNWSObject *, CGameEffect *);
    int OnRemoveEntangled(CNWSObject *, CGameEffect *);
    int OnRemoveHasteInternal(CNWSObject *, CGameEffect *);
    int OnRemoveHasteOrSlow(CNWSObject *, CGameEffect *);
    int OnRemoveHitPointChangeWhenDying(CNWSObject *, CGameEffect *);
    int OnRemoveInvisibility(CNWSObject *, CGameEffect *);
    int OnRemoveItemProperty(CNWSObject *, CGameEffect *);
    int OnRemoveKnockdown(CNWSObject *, CGameEffect *);
    int OnRemoveLight(CNWSObject *, CGameEffect *);
    int OnRemoveLimitMovementSpeed(CNWSObject *, CGameEffect *);
    int OnRemoveMissChance(CNWSObject *, CGameEffect *);
    int OnRemoveModifyNumAttacks(CNWSObject *, CGameEffect *);
    int OnRemoveMovementSpeedDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveMovementSpeedIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveNegativeLevel(CNWSObject *, CGameEffect *);
    int OnRemovePetrify(CNWSObject *, CGameEffect *);
    int OnRemovePolymorph(CNWSObject *, CGameEffect *);
    int OnRemoveRacialType(CNWSObject *, CGameEffect *);
    int OnRemoveSanctuary(CNWSObject *, CGameEffect *);
    int OnRemoveSavingThrowDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveSavingThrowIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveSeeInvisible(CNWSObject *, CGameEffect *);
    int OnRemoveSetAIState(CNWSObject *, CGameEffect *);
    int OnRemoveSetStateInternal(CNWSObject *, CGameEffect *);
    int OnRemoveSetState(CNWSObject *, CGameEffect *);
    int OnRemoveSilence(CNWSObject *, CGameEffect *);
    int OnRemoveSkillDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveSkillIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveSlowInternal(CNWSObject *, CGameEffect *);
    int OnRemoveSpecialWalkAnimation(CNWSObject *, CGameEffect *);
    int OnRemoveSpellFailure(CNWSObject *, CGameEffect *);
    int OnRemoveSpellImmunity(CNWSObject *, CGameEffect *);
    int OnRemoveSpellLevelAbsorption(CNWSObject *, CGameEffect *);
    int OnRemoveSpellResistanceDecrease(CNWSObject *, CGameEffect *);
    int OnRemoveSpellResistanceIncrease(CNWSObject *, CGameEffect *);
    int OnRemoveSummonCreature(CNWSObject *, CGameEffect *);
    int OnRemoveSwarm(CNWSObject *, CGameEffect *);
    int OnRemoveTaunt(CNWSObject *, CGameEffect *);
    int OnRemoveTemporaryHitpoints(CNWSObject *, CGameEffect *);
    int OnRemoveTimestop(CNWSObject *, CGameEffect *);
    int OnRemoveTrueSeeing(CNWSObject *, CGameEffect *);
    int OnRemoveTurnResistance(CNWSObject *, CGameEffect *);
    int OnRemoveUltraVision(CNWSObject *, CGameEffect *);
    int OnRemoveVision(CNWSObject *, CGameEffect *);
    int OnRemoveVisualEffect(CNWSObject *, CGameEffect *);
    int OnRemoveWounding(CNWSObject *, CGameEffect *);
    void SendFloatyEffect(unsigned long, unsigned long);
    ~CNWSEffectListHandler();

};
#endif
