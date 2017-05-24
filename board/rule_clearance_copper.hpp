#include "rules/rule.hpp"
#include "common.hpp"
#include "rules/rule_match.hpp"

namespace horizon {
	class RuleClearanceCopper: public Rule {
		public:
			RuleClearanceCopper(const UUID &uu);
			RuleClearanceCopper(const UUID &uu, const json &j);
			json serialize() const override;

			std::string get_brief() const;

			RuleMatch match_1;
			RuleMatch match_2;
			int layer = 10000;

			uint64_t get_clearance(PatchType a, PatchType b) const;
			void set_clearance(PatchType a, PatchType b, uint64_t c);

		private:
			std::map<std::pair<PatchType, PatchType>, uint64_t> clearances;
	};
}